#define MAX_ELEMENTS 100
int scores[MAX_ELEMENTS];

int get_max_score(int n) //학생의 숫자는 n
{
  int i, largest;
  largest = scores[0];
  for( i=1; i<n; i++){
    if(score[i]>largest){
      largest=scores[i];
    }
  }
  return largest;
}
