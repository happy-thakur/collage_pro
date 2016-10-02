#include<stdio.h>
int all[26][3][3];
int a[4][4], i, j;

void assign();
void check();

void main(){

int count = 0;
int k, count2 = 0;
   //assigning the values...
    int all[26][3][3] ={
		    {//for A == 0
		      {0, 1, 0},
		      {1, 1, 1},
		      {1, 0, 1}
		    },
		    {//for B  == 1
		      {1, 1, 1},
		      {1, 1, 1},
		      {1, 1, 1}
		    },
		    {//for C   == 2
		      {1, 1, 1},
		      {1, 0, 0},
		      {1, 1, 1}
		    },
		    {//for D      3
		      {1, 1, 1},
		      {1, 0, 1},
		      {1, 1, 1}
		    },
		    {//for E       4
		      {1, 1, 1},
		      {1, 1, 0},
		      {1, 1, 1}
		    },
		    {//for F        5
		      {1, 1, 1},
		      {1, 1, 0},
		      {1, 0, 0}
		    },
		    {//for G         6
		      {0, 0, 0},
		      {0, 0, 0},
		      {0, 0, 0}
		    },
		    {//for H          7
		      {1, 0, 1},
		      {1, 1, 1},
		      {1, 0, 1}
		    },
		    {//for I           8
		      {1, 1, 1},
		      {0, 1, 0},
		      {1, 1, 1}
		    },
		    {//for J            9
		      {0, 0, 0},
		      {0, 0, 0},
		      {0, 0, 0}
		    },
		    {//for K             10
		      {1, 0, 1},
		      {1, 1, 0},
		      {1, 0, 1}
		    },
		    {//for L               11
		      {1, 0, 0},
		      {1, 0, 0},
		      {1, 1, 1}
		    },
		    {//for M                 12
		      {1, 0, 1},
		      {1, 1, 1},
		      {1, 0, 1}
		    },
		    {//for N                   13
		      {1, 0, 0},
		      {1, 1, 1},
		      {1, 0, 1}
		    },
		    {//for O                     14
		      {1, 1, 1},
		      {1, 0, 1},
		      {1, 1, 1}
		    },
		    {//for P                       15
		      {1, 1, 1},
		      {1, 1, 1},
		      {1, 0, 0}
		    },
		    {//for Q                         16
		      {0, 0, 0},
		      {0, 0, 0},
		      {0, 0, 0}
		    },
		    {//for R                           17
		      {1, 1, 1},
		      {1, 1, 1},
		      {1, 0, 1}
		    },
		    {//for S                             18
		      {0, 0, 0},
		      {0, 0, 0},
		      {0, 0, 0}
		    },
		    {//for T                               19
		      {1, 1, 1},
		      {0, 1, 0},
		      {0, 1, 0}
		    },
		    {//for U                                 20
		      {1, 0, 1},
		      {1, 0, 1},
		      {1, 1, 1}
		    },
		    {//for V                                   21
		      {1, 0, 1},
		      {1, 0, 1},
		      {0, 1, 0}
		    },
		    {//for W                                     22
		      {1, 0, 1},
		      {1, 1, 1},
		      {1, 0, 1}
		    },
		    {//for X                                       23
		      {1, 0, 1},
		      {0, 1, 0},
		      {1, 0, 1}
		    },
		    {//for Y                                         24
		      {1, 0, 1},
		      {0, 1, 0},
		      {0, 1, 0}
		    },
		    {//for Z                                           25
		      {1, 1, 1},
		      {0, 1, 0},
		      {1, 1, 1}
		    }
		  };

  clrscr();
  //getting the input from the user..
  printf("enter a char in 2 mattrix");
  for(i=0; i<3; i++){
    for (j = 0; j < 3; j++) {
      scanf("%d",&a[i][j]);
    }
  }
  clrscr();
  //showing what have been entered..
  printf("you have entered --\n");
  for(i=0; i<3; i++){
    for (j = 0; j < 3; j++) {
      if(a[i][j] == 1){
	printf("*");
      } else {
	printf(" ");
	count++;
      }
    }
    printf("\n");
  }
  if(count == 9){
    printf("Please input something..");
  } else {

    //checking the value..
     for(k=0; k<26; k++){
    for(i=0; i<3; i++){
      for(j=0; j<3; j++){
     // printf("a  %d ===  all %d\t",a[i][j],all[k][i][j]);
	if(a[i][j] == all[k][i][j]){
	  //this means satisfing the criteria..
	  count2++;
	}
	else{
//	  printf("\t k%d**** i%d**** j%d",k,i,j);
	  break;
	}
      }
  //    if(a[i][j] != all[k][i][j]){
    //	  break;
      //	}
	//getch();
    }
    if(count2 == 9){
      //it means it satisfies all the crteria..
      //and it matches the character..
      printf("charater matches..\n");
      printf("and the character is %c",(k+65));
      break;
    } else {
      count2 = 0;
    }
  }
  }
  getch();
}
