char* intToRoman(int num) {
  //allocate memory for the roman number
    char* array = (char)malloc(16);
  //counter for the array / string
    int temp, c = 0;
  //easy access of char
    char s[7] = {'I','V','X','L','C','D','M'};
  
  //write the roman number down in reverse
    for(int i = 0; num > 0; i++, num /= 10)
    {  
      //receive last dec. digit of int
        temp = num % 10;
        if(temp < 5)
        {
          switch(temp){
                case 4: array[c++] = s[i2+1];
                        array[c++] = s[i2];
                        break;
                case 3: array[c++] = s[i2];
                case 2: array[c++] = s[i2];
                case 1: array[c++] = s[i2];
                        break;}
        }
        else
        {
          switch(temp){
                case 9: array[c++] = s[i2+2];
                        array[c++] = s[i2];
                        break;
                case 8: array[c++] = s[i2];
                case 7: array[c++] = s[i2];
                case 6: array[c++] = s[i2];
                case 5: array[c++] = s[i2+1];
                        break;}
        }
    }

  //reverse reversed roman number
    for(int i = 0; i < c/2 ; i++)
    {
        temp = (int)array[i];
        array[i] = array[c-1 - i];
        array[c-1 - i] = (char)temp;
    }
  //sets end of string
    array[c] = '\0';
  //returns the array
    return(array);
}
