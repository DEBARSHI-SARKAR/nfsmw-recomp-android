/* speed.exe 006d1a40 FUN_006d1a40; analysis pseudocode, not buildable source.
 * calls 006c6ed0 FUN_006c6ed0
 * calls 006c6cc0 FUN_006c6cc0
 * calls 006c8000 FUN_006c8000
 */

void FUN_006d1a40(undefined4 param_1,int *param_2,int *param_3)

{
  int *piStack_8c;
  int iStack_88;
  
  if (param_3 == (int *)0x0) {
    param_3 = (int *)&DAT_00987ab0;
  }
  if (param_2 != (int *)0x0) {
    iStack_88 = 0;
    piStack_8c = param_2;
    FUN_006c6cc0();
  }
  iStack_88 = *(int *)(DAT_00982a20 + 4);
  piStack_8c = param_3;
  FUN_006c8000();
  if (DAT_00982bc4 != 0) {
    iStack_88 = DAT_00982bc4;
    piStack_8c = *(int **)(*(int *)(DAT_00982c80 + 0x44) + 0x2a4);
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0xd0))(*(int **)(DAT_00982c80 + 0x48));
  }
  if (DAT_008f9358 != '\0') {
    iStack_88 = 0x6d1bfc;
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x104))();
    DAT_00982ca0 = 0;
    piStack_8c = *(int **)(DAT_00982c80 + 0x48);
    iStack_88 = 0;
    (**(code **)(*piStack_8c + 0x100))();
    (**(code **)(*DAT_00982bdc + 0x14c))(DAT_00982bdc,6,2,&piStack_8c,0x20);
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x108))(*(int **)(DAT_00982c80 + 0x48));
  }
  FUN_006c6ed0();
  return;
}

