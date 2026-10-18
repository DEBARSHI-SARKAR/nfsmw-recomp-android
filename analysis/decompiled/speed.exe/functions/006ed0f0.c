/* speed.exe 006ed0f0 FUN_006ed0f0; analysis pseudocode, not buildable source.
 * calls 006eccd0 FUN_006eccd0
 * calls 005d29d0 FUN_005d29d0
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_006ed0f0(int param_1,int *param_2,float param_3,undefined4 param_4,float param_5,
            undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float local_8;
  
  if (_DAT_0089096c <= param_3) {
    local_8 = 1.0;
  }
  else {
    local_8 = param_3;
  }
  if (param_5 <= _DAT_00890968) {
    param_3 = 0.0;
  }
  else {
    param_3 = param_5;
  }
  if (DAT_00988ed0 < 1000) {
    uVar1 = FUN_00452940();
    uVar5 = 0;
    if (uVar1 != 0) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x58);
        uVar2 = FUN_00452940();
        if (uVar5 < uVar2) {
          iVar3 = iVar4 + 8 + iVar3;
        }
        else {
          iVar3 = FUN_006269b0(0x10);
        }
        if ((*param_2 == *(int *)(iVar3 + 8)) && (*(int *)(iVar3 + 0xc) != 0)) {
          iVar4 = FUN_005d29d0(0x28,0);
          if (iVar4 == 0) {
            return uRam00000020;
          }
          iVar4 = FUN_006eccd0(uVar5,local_8,param_4,param_3,param_6);
          return *(undefined4 *)(iVar4 + 0x20);
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x10;
      } while (uVar5 < uVar1);
    }
    return 0;
  }
  return 0;
}

