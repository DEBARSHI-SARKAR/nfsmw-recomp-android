/* speed.exe 004ea9b0 FUN_004ea9b0; analysis pseudocode, not buildable source.
 * calls 004ea9b0 FUN_004ea9b0
 */

void __thiscall FUN_004ea9b0(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EDI;
  
  if ((uint)param_1[2] < param_2) {
    (**(code **)(*param_1 + 0x14))(param_2);
    puVar2 = (undefined4 *)param_1[1];
    iVar5 = param_1[3];
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 4))(param_2,0x10);
    param_1[1] = (int)puVar3;
    param_1[2] = param_2;
    if (puVar2 != puVar3) {
      param_1[3] = 0;
      puVar3 = puVar2;
      if (0 < iVar5) {
        do {
          if ((uint)param_1[2] <= (uint)param_1[3]) {
            uVar4 = (**(code **)(*param_1 + 0xc))(param_1[3] + 1);
            FUN_004ea9b0(uVar4);
          }
          puVar1 = (undefined4 *)(param_1[1] + param_1[3] * 0x14);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *puVar3;
            puVar1[1] = puVar3[1];
            puVar1[2] = puVar3[2];
            puVar1[3] = puVar3[3];
            puVar1[4] = puVar3[4];
          }
          iVar5 = iVar5 + -1;
          param_1[3] = param_1[3] + 1;
          puVar3 = puVar3 + 5;
        } while (iVar5 != 0);
      }
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)(*param_1 + 8))(puVar2,unaff_EDI);
      }
    }
  }
  return;
}

