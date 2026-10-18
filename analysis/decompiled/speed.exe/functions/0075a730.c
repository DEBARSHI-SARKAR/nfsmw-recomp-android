/* speed.exe 0075a730 FUN_0075a730; analysis pseudocode, not buildable source.
 * calls 0074c210 FUN_0074c210
 * calls 00756e90 FUN_00756e90
 */

void __thiscall FUN_0075a730(int param_1,int param_2,uint param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0xc + param_2 * 4);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 4) = (undefined2)param_3;
    iVar5 = 0;
    while( true ) {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc) >> 2;
      }
      if (iVar3 <= iVar5) break;
      iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + iVar5 * 4);
      puVar2 = *(ushort **)(param_1 + 0x34 + iVar3 * 4);
      if (puVar2 != (ushort *)0x0) {
        uVar4 = (uint)*puVar2;
        if ((int)(uint)*puVar2 <= (int)param_3) {
          uVar4 = param_3;
        }
        if (0 < (int)uVar4) {
          uVar4 = 1;
        }
        *puVar2 = (ushort)uVar4;
        if (*(int *)(*(int *)(param_1 + 4) + 0x84) != 0) {
          FUN_00756e90(iVar3,*(undefined4 *)(puVar2 + uVar4 * 2 + 4),0);
        }
        FUN_0074c210();
      }
      iVar5 = iVar5 + 1;
    }
  }
  return;
}

