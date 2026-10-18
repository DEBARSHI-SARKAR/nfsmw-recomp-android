/* speed.exe 004569d0 FUN_004569d0; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 * calls 00455890 FUN_00455890
 * calls 00659250 FUN_00659250
 */

void __thiscall FUN_004569d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  uVar4 = DAT_0090dcd0;
  if (param_2 != 0) {
    iVar1 = param_1[1];
    param_1[1] = param_2;
    param_2 = param_2 * 0xc;
    DAT_0090dcd4 = DAT_0090dcd4 + param_2;
    iVar2 = *param_1;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 3) = 0;
    if (uVar4 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    if ((param_2 == 0) ||
       (puVar3 = (undefined4 *)(*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(param_2,0),
       puVar3 == (undefined4 *)0x0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = puVar3;
      *(undefined2 *)(puVar3 + 2) = 0;
      *(undefined1 *)((int)puVar3 + 10) = 0;
      *(undefined1 *)((int)puVar3 + 0xb) = 0;
    }
    *param_1 = (int)puVar3;
    uVar4 = 1;
    if (1 < (uint)param_1[1]) {
      iVar5 = 0xc;
      do {
        puVar3 = (undefined4 *)(*param_1 + iVar5);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = puVar3;
          *(undefined2 *)(puVar3 + 2) = 0;
          *(undefined1 *)((int)puVar3 + 10) = 0;
          *(undefined1 *)((int)puVar3 + 0xb) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar4 < (uint)param_1[1]);
    }
    if (iVar2 != 0) {
      if (iVar1 != 0) {
        piVar6 = (int *)(iVar2 + 4);
        iVar5 = iVar1;
        do {
          if (((*(byte *)((int)piVar6 + 7) & 0x10) != 0) || ((int *)*piVar6 != piVar6 + -1)) {
            *(undefined1 *)((int)piVar6 + 6) = 0;
            FUN_00455890(piVar6 + -1);
          }
          piVar6 = piVar6 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      DAT_0090dcd4 = DAT_0090dcd4 + iVar1 * -0xc;
      if (DAT_0090dcd0 < DAT_0090dcd4) {
        DAT_0090dcd0 = DAT_0090dcd4;
      }
      if (iVar1 * 0xc != 0) {
        (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar2,iVar1 * 0xc,0);
      }
    }
  }
  return;
}

