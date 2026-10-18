/* speed.exe 00793460 FUN_00793460; analysis pseudocode, not buildable source.
 * calls 00841970 FUN_00841970
 * calls 00652b00 thunk_FUN_007c7250
 * calls 008412c0 FUN_008412c0
 * calls 007932c0 FUN_007932c0
 * calls 00840590 FUN_00840590
 * calls 008443d0 FUN_008443d0
 */

void __fastcall FUN_00793460(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 6;
  piVar5 = param_1;
  do {
    piVar1 = (int *)*piVar5;
    while (piVar1 != piVar5) {
      iVar2 = *(int *)*piVar5;
      piVar3 = (int *)((int *)*piVar5)[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      if (piVar1 != (int *)0x0) {
        thunk_FUN_007c7250(piVar1);
      }
      piVar1 = (int *)*piVar5;
    }
    piVar5 = piVar5 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (param_1[0xe] != 0) {
    FUN_007932c0();
    iVar4 = 0;
    do {
      FUN_00840590(param_1[0xe],iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    FUN_008412c0(param_1[0xe],0);
    if (param_1[0xf] != 0) {
      FUN_008443d0(param_1[0xf]);
      param_1[0xf] = 0;
    }
    FUN_00841970(param_1[0xe]);
    param_1[0xe] = 0;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((int)param_1 + 0x71) = 0;
  return;
}

