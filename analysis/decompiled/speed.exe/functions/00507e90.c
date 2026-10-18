/* speed.exe 00507e90 FUN_00507e90; analysis pseudocode, not buildable source.
 * calls 00506440 FUN_00506440
 * calls 00466440 FUN_00466440
 * calls 00506480 FUN_00506480
 */

void __fastcall FUN_00507e90(int param_1)

{
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086deae;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00506480();
  piVar1 = *(int **)(param_1 + 0x88);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    if (*(int *)(param_1 + 0x88) != 0) {
      FUN_00466440(*(int *)(param_1 + 0x88));
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00506440();
  ExceptionList = local_c;
  return;
}

