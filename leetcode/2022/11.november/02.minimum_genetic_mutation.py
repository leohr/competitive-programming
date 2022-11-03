class Solution:
    def minMutation(self, startGene: str, endGene: str, bank: List[str]) -> int:
        # Function for asking if 2 genes are mutations of each other 
        def areMutation(gene1, gene2): 
            changes = 0
            for i in range(8): 
                if gene1[i] != gene2[i]: 
                    changes += 1 
            if changes == 1: 
                return True
            return False 
            
        # BFS-type algorithm 
        distances = {startGene: 0}
        toVisit = [startGene]
        visited = set() 
        
        while len(toVisit) > 0: 
            currentGene = toVisit[0] 
            toVisit.pop(0)
            visited.add(currentGene)
            
            if currentGene == endGene: 
                return distances[currentGene]
            
            for gene in bank: 
                if areMutation(currentGene, gene) and not gene in visited: 
                    if gene in distances.keys(): 
                        distances[gene] = min(distances[currentGene] + 1, distances[gene]) 
                    else: 
                        distances[gene] = distances[currentGene] + 1
                    toVisit.append(gene)
            
        return -1
