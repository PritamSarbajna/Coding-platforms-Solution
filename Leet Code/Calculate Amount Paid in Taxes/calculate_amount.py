class Solution:
    def calculateTax(self, brackets: List[List[int]], income: int) -> float:
        existing = 0;
        current = 0;
        
        for p,q in brackets:
            x = p;
            p = min(p, income);
            if (p-existing) < 0:
                return current;
            current += (p-existing) * (q/100);
            existing = x;
        return current;
