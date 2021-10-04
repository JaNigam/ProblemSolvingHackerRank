string catAndMouse(int x, int y, int z) {
    
    if(abs(x-z) == abs(z-y))
        return "Mouse C";
        
    else if(abs(x-z) > abs(z-y))
        return "Cat B";
        
    else return "Cat A";
}
