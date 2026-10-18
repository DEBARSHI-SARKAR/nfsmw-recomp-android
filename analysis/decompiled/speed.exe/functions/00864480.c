/* speed.exe 00864480 FUN_00864480; analysis pseudocode, not buildable source.
 * calls 00863160 FUN_00863160
 * calls 0084af40 FUN_0084af40
 * calls 0084af90 FUN_0084af90
 * calls 00863b20 FUN_00863b20
 */

void FUN_00864480(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_00863160();
  *(undefined4 *)(param_1 + 8) = uVar2;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  puVar1 = (undefined1 *)(param_1 + 0x18);
  if (param_3 != 0) {
    iVar4 = 0x3f;
    iVar5 = 0x3f;
    puVar3 = puVar1;
    do {
      *puVar3 = puVar3[param_3 - (int)puVar1];
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1[iVar5] = 0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_0084af90(*(int *)(param_1 + 0xe0),2);
    FUN_0084af40(*(undefined4 *)(param_1 + 0xe0));
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  FUN_00863b20();
  return;
}

