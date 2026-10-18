/* speed.exe 00652820 FUN_00652820; analysis pseudocode, not buildable source.
 * calls 004624a0 FUN_004624a0
 * calls 00652650 FUN_00652650
 * calls 00652770 FUN_00652770
 */

undefined4 __thiscall FUN_00652820(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_4;
  iVar3 = param_3;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x14) * 8 + -0x44 <= *(int *)(param_1 + 8))) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x30 + param_4 * 0x24);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if ((piVar1[4] != 0) && (piVar1[2] == param_3)) {
    param_4 = *piVar1;
    if ((piVar1[3] != (1 << ((byte)param_4 & 0x1f)) + -1) && (piVar1[5] == param_2)) {
      iVar3 = piVar1[3] + 1;
      piVar1[3] = iVar3;
      FUN_00652650(piVar1[4],iVar3,param_4);
      goto LAB_006528e7;
    }
  }
  FUN_00652650(*(undefined4 *)(param_1 + 8),iVar2,4);
  iVar2 = *(int *)(param_1 + 8) + 4;
  *(int *)(param_1 + 8) = iVar2;
  piVar1[4] = iVar2;
  FUN_00652650(*(undefined4 *)(param_1 + 8),0,*piVar1);
  piVar1[3] = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *piVar1;
  piVar1[5] = param_2;
  FUN_00652650(*(undefined4 *)(param_1 + 8),param_2,iVar3);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar3;
  piVar1[2] = iVar3;
LAB_006528e7:
  if ((*(int *)(param_1 + 0x1c) != 0) &&
     (iVar3 = *(int *)(param_1 + 4) + 1, *(int *)(param_1 + 4) = iVar3, iVar3 == 1)) {
    param_2 = param_1;
    FUN_004624a0("CODEINE",0x3f,&param_2,4);
  }
  if ((*(int *)(param_1 + 0x14) * 8 + -0x44 <= *(int *)(param_1 + 8)) &&
     (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_00652770();
  }
  return 1;
}

