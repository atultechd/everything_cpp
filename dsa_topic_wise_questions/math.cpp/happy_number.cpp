class Solution {

public:

    int solve_is_happy(int n){

        int sum =0;

        while(n > 0){

            sum += pow(n%10, 2);

            n /= 10;
        }
        return sum;
    }
    
    
    
    bool isHappy(int n) {

        int turtle, rabbit;

        turtle = rabbit = n;

        do{

            turtle = solve_is_happy(turtle);

            rabbit = solve_is_happy(rabbit);

            rabbit = solve_is_happy(rabbit);

        }while(turtle != rabbit);

        if(turtle == 1) return 1;

        else return 0;
    }
};