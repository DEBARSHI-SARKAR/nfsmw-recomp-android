/* speed.exe 0041ae90 FUN_0041ae90; analysis pseudocode, not buildable source.
 * calls 0041ae90 FUN_0041ae90
 */

void __thiscall FUN_0041ae90(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EDI;
  
  if ((uint)param_1[2] < param_2) {
    (**(code **)(*param_1 + 0x14))(param_2);
    iVar2 = param_1[1];
    iVar3 = param_1[3];
    iVar4 = (**(code **)(*param_1 + 4))(param_2,0x10);
    param_1[1] = iVar4;
    param_1[2] = param_2;
    if (iVar2 != iVar4) {
      iVar4 = 0;
      param_1[3] = 0;
      if (0 < iVar3) {
        do {
          if ((uint)param_1[2] <= (uint)param_1[3]) {
            uVar5 = (**(code **)(*param_1 + 0xc))(param_1[3] + 1);
            FUN_0041ae90(uVar5);
          }
          puVar1 = (undefined4 *)(param_1[1] + param_1[3] * 4);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *(undefined4 *)(iVar2 + iVar4 * 4);
          }
          iVar4 = iVar4 + 1;
          param_1[3] = param_1[3] + 1;
        } while (iVar4 < iVar3);
      }
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 8))(iVar2,unaff_EDI);
      }
    }
  }
  return;
}

