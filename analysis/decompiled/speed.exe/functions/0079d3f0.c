/* speed.exe 0079d3f0 FUN_0079d3f0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 0079f090 FUN_0079f090
 * calls 0083c4e0 FUN_0083c4e0
 * calls 0056e340 FUN_0056e340
 * calls 0083b5f0 FUN_0083b5f0
 * calls 0079ca30 FUN_0079ca30
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00465a70 FUN_00465a70
 * calls 00460d20 FUN_00460d20
 * calls 007970b0 FUN_007970b0
 * calls 007ec1bd FUN_007ec1bd
 * calls 0078c2b0 FUN_0078c2b0
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __fastcall FUN_0079d3f0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_10 [4];
  
  if (*(int *)(DAT_0091cf90 + 0x19c) < 2) {
    return;
  }
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if (*(int *)(param_1 + 0x230) == 0) {
    puVar1 = (undefined1 *)FUN_00465a70(0x84,8);
    *(undefined1 **)(param_1 + 0x230) = puVar1;
    *puVar1 = 0;
  }
  iVar2 = FUN_0079ca30();
  if ((*(int *)(iVar2 + 8) != -1) && ((int *)(iVar2 + 8) != (int *)0x0)) {
    uVar3 = FUN_0056e340(iVar2 + 0x40);
    iVar4 = FUN_00460d20(uVar3);
    if (iVar4 == 0) {
      FUN_0079f090();
      local_10[1] = 0;
      iVar4 = 1;
      local_10[2] = 0;
      local_10[3] = 0;
      local_10[0] = 3;
      if (1 < *(int *)(iVar2 + 0x174)) {
        iVar6 = iVar2 + 0x2ac;
        do {
          iVar5 = FUN_0078c2b0(iVar6);
          if (iVar5 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(iVar5 + 0x88);
          }
          local_10[iVar4] = uVar3;
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 0x8c;
        } while (iVar4 < *(int *)(iVar2 + 0x174));
      }
      FUN_0083b5f0(*(undefined4 *)(param_1 + 0x230),0x80,&DAT_008b6cb8,local_10,0x10,&DAT_0089b350);
      goto LAB_0079d52c;
    }
  }
  FUN_0083c4e0(*(undefined4 *)(param_1 + 0x230),&DAT_008b6cb8);
LAB_0079d52c:
  FUN_007970b0();
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

