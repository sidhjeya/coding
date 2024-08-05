
class Solution:
    
    def lengthOfLastWord(self, s: str) -> int:
        list1=[]
        list2=[]
        list1=s.rsplit(" ")
        for i in range (len(list1)):
            if(list1[i]!=''):
                list2.append(list1[i])

        stri=""
        for item in range (len(list2)): 
            if(item==0):
                stri= list2[item]
            else:    
                stri= list2[item] +" "+stri
     
        return stri

if __name__== "__main__":
    sol=Solution()
    hi=sol.lengthOfLastWord("the sky is blue")
    print(hi)
