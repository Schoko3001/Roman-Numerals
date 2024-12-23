int romanToInt(char* s) {
    int sum = 0;
    int temp1;
    int temp2 = 0;
  
    for(int i = 0; s[i] != '\0'; i++)
    {
        switch(s[i]){
            case 'I': temp1 = 1;    break;
            case 'V': temp1 = 5;    break;
            case 'X': temp1 = 10;   break;
            case 'L': temp1 = 50;   break;
            case 'C': temp1 = 100;  break;
            case 'D': temp1 = 500;  break;
            case 'M': temp1 = 1000; break;}

      //if temp2 < temp1 -> I < V
        sum += (temp2 < temp1) ? -temp2 : temp2;
        temp2 = temp1;
    }
//returns the number
  return(sum + temp2);
}
