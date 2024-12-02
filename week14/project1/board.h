//
//  board.h
//  sharkGame
//


#ifndef board_h
#define board_h

#include <stdio.h>
#include <stdlib.h>

// ----- EX. 3 : board ------------
#define N_BOARD                 20

//0 - OK, 1 - destroyed
#define BOARDSTATUS_NOK          1
#define BOARDSTATUS_OK           0

int board_initBoard(void); //���� �ʱ�ȭ 
int board_getBoardStatus(int pos); //��ü ������ ������� 
int board_getSharkPosition(void); //����� ��ġ ��� //�� ���� ���� �ȵ�. 
int board_stepShark(void); //��� ���� ���� 
int board_getBoardCoin(int pos); //���� ���� ���� 
void board_printBoardStatus(void); //Ư�� ĭ�� �ļ� ���� ��� 
// ----- EX. 3 : board ------------
#endif /* board_h */