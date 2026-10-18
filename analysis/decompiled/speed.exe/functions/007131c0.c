/* speed.exe 007131c0 FUN_007131c0; analysis pseudocode, not buildable source.
 * calls 00705c80 FUN_00705c80
 * calls 0070f970 FUN_0070f970
 */

void __thiscall FUN_007131c0(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  int local_c;
  float local_8;
  int local_4;
  
  if (*(int *)(DAT_00993cc8 + 0x130) == 0) {
    return;
  }
  if (*(int *)(DAT_00993cc8 + 0x138) == 1) {
    return;
  }
  if (*(int *)(DAT_00993cc8 + 0x138) == 999) {
    return;
  }
  piVar5 = (int *)**(int **)(param_1 + 0x18);
  bVar3 = false;
  if (piVar5 != *(int **)(param_1 + 0x18)) {
    do {
      if (piVar5[2] == param_2) {
        piVar5[3] = DAT_00925ae8;
        piVar5[5] = param_3;
        fVar2 = param_4;
        if (param_4 <= (float)piVar5[4]) {
          fVar2 = (float)piVar5[4];
        }
        piVar5[4] = (int)fVar2;
        bVar3 = true;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0x18));
    if (bVar3) goto LAB_0071328a;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  local_4 = param_3;
  local_10 = param_2;
  local_c = DAT_00925ae8;
  local_8 = param_4;
  iVar4 = FUN_00705c80(iVar1,*(undefined4 *)(iVar1 + 4),&local_10);
  FUN_0070f970(1);
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
LAB_0071328a:
  *(int *)(param_1 + 0x24) = param_2;
  return;
}

