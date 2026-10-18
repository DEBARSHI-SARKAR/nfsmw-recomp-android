/* speed.exe 00659090 FUN_00659090; analysis pseudocode, not buildable source.
 */

int FUN_00659090(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  puVar6 = DAT_009259a8;
  if (DAT_009259a8 != &DAT_009259a4) {
    do {
      if ((puVar6[3] == param_1) || (param_1 == 0)) {
        piVar2 = (int *)puVar6[0xf];
        iVar3 = 0;
        iVar4 = 0;
        if (piVar2 != (int *)0x0) {
          piVar5 = (int *)(puVar6[0x10] + (int)piVar2);
          for (; piVar2 != piVar5; piVar2 = (int *)((int)piVar2 + piVar2[1] + 8)) {
            if ((param_2 == 0) || (*piVar2 == param_2)) {
              iVar3 = iVar3 + piVar2[1];
              iVar4 = iVar4 + 1;
            }
          }
        }
        local_8 = local_8 + iVar3;
        local_4 = local_4 + iVar4;
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_009259a4);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_4;
  }
  return local_8;
}

