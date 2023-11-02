class Solution {
  bool isValid(String s) {
    final List<String> stack = [];
    
    
    for(int i=0; i<s.length; i++) {
        var c = s[i];
        if (c == ')' || c == '}' || c == ']') {
            
            if (stack.isEmpty) {
                return false;
            }
            
            var top = stack.last;
            if ((top == '(' && c == ')') || (top == '{' && c == '}') || (top == '[' && c == ']')) {
                stack.removeLast();
            }else{
                return false;
            }
        }else{
            stack.add(c);
        }
    }
    
    return stack.isEmpty;
  }
}
