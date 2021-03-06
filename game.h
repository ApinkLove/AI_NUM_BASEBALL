void loadGame(int mode);
void startGame(int* guess_answer);
void checkGame(struct num *num, struct record *record, int count, int* round_strike, int* round_ball);
void resultGame(int result_code);
void testGame();
void num_ball(int *ans_num, int *guess_num, int count, int *round_strike, int *round_ball);
__inline void evaluate(int* num, int result);
void initialize(struct num *num, struct record *record, int *count, int* round_strike, int* round_ball);
enum {WIN=0, LOSE, YES=1, VERYHIGH, HIGH, NORMAL, LOW, SOLOW, VERYLOW, NO, FIRST=0, MIDDLE, LAST, NEW=1, REPLAY, NOT=0, OK};
