/* speed.exe 00613bb0 FUN_00613bb0; analysis pseudocode, not buildable source.
 * calls 00613a70 FUN_00613a70
 * calls 00606980 FUN_00606980
 */

int FUN_00613bb0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (*DAT_0091e0e0)(param_1,0,0,0x58,3);
  if (iVar2 == 0) {
    if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00606980(param_1,4);
    }
    iVar2 = 0;
  }
  else if (param_1 != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x24);
    *piVar1 = *piVar1 + 0x58;
  }
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined1 *)(iVar2 + 0x32) = 0;
  *(undefined1 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x31) = 1;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined2 *)(iVar2 + 0x2c) = 0;
  *(undefined2 *)(iVar2 + 0x2e) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_00613a70();
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(param_1 + 0x44);
  return iVar2;
}

