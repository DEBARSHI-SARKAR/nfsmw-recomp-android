/* speed.exe 008269bf FUN_008269bf; analysis pseudocode, not buildable source.
 * calls 00828976 FUN_00828976
 * calls 0082885e FUN_0082885e
 * calls 00822050 FUN_00822050
 * calls 0081e092 FUN_0081e092
 * calls 00828840 FUN_00828840
 * calls 0081e1e8 FUN_0081e1e8
 * calls 0082880f FUN_0082880f
 * calls 008287ae FUN_008287ae
 */

int FUN_008269bf(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  iVar1 = param_1;
  local_8 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_0081e1e8(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x38),
                 *(int *)(param_1 + 0x28));
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  while (0 < param_2) {
    iVar2 = FUN_00828976(&param_4,param_2);
    *(short *)(iVar1 + 0x2c) = *(short *)(iVar1 + 0x2c) + (short)iVar2;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + iVar2;
    local_8 = local_8 + iVar2;
    param_4 = param_4 + iVar2 * 4;
    if (iVar2 < param_2) {
      param_2 = param_2 - iVar2;
      iVar2 = FUN_0081e092(*(undefined4 *)(iVar1 + 0x24),*(undefined1 *)(iVar1 + 0x38),
                           (undefined4 *)(iVar1 + 0x20),&param_1);
      *(int *)(iVar1 + 0x1c) = iVar2;
      if (iVar2 == 0) {
        if ((0 < param_2) && (*(int *)(iVar1 + 0x28) != 0)) {
          FUN_00822050(param_4,param_2 << 2);
        }
        *(undefined4 *)(iVar1 + 0x20) = 0;
        param_2 = 0;
      }
      else {
        *(undefined2 *)(iVar1 + 0x2c) = 0;
        if (*(int *)(iVar1 + 0x30) < 2) {
          bVar4 = param_1 != 0;
          if (bVar4) {
            puVar3 = (undefined4 *)FUN_0082880f(local_2c);
            local_14 = *puVar3;
            local_10 = puVar3[1];
          }
          else {
            puVar3 = (undefined4 *)FUN_0082880f(local_20);
            local_14 = *puVar3;
            local_10 = puVar3[1];
          }
          local_c = (uint)!bVar4;
          FUN_00828840(&local_14,0);
          uVar5 = 0;
        }
        else {
          bVar4 = param_1 != 0;
          if (bVar4) {
            puVar3 = (undefined4 *)FUN_0082880f(local_44);
            local_14 = *puVar3;
            local_10 = puVar3[1];
          }
          else {
            puVar3 = (undefined4 *)FUN_0082880f(local_38);
            local_14 = *puVar3;
            local_10 = 0;
          }
          local_c = (uint)!bVar4;
          FUN_00828840(&local_14,0);
          uVar5 = 1;
        }
        FUN_0082885e(uVar5);
        FUN_008287ae(*(int *)(iVar1 + 0x1c) + 1,*(int *)(iVar1 + 0x20) << 2,*(int *)(iVar1 + 0x20));
      }
    }
    else {
      param_2 = param_2 - iVar2;
    }
  }
  return local_8;
}

