main(){
 float f=254.73;

    int integer = (int)f;
//    float fractional = f-integer;
    float fractional_part_in_integer = ((f*100)%100);

    printf ("The value is: %d", fractional_part_in_integer);
}
