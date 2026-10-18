/* speed.exe 00829f60 FUN_00829f60; analysis pseudocode, not buildable source.
 * calls 00834e6d FUN_00834e6d
 * calls 0082e3e0 FUN_0082e3e0
 * calls 007c4b80 FUN_007c4b80
 * calls 008298f0 FUN_008298f0
 * calls 00834ec8 FUN_00834ec8
 */

undefined4 FUN_00829f60(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_8;
  
  if (DAT_009c2974 != '\0') {
    local_8 = 0;
    iVar1 = FUN_00834e6d(&local_8);
    local_8 = (uint)(iVar1 == 0);
    if (local_8 != 0) {
      iVar1 = FUN_0082e3e0(param_1 | 0xf000000);
      if (iVar1 != 0) {
        uVar3 = 0;
        do {
          if ((param_1 & 1 << ((byte)uVar3 & 0x1f)) != 0) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < 0x18);
        if (uVar3 <= *(byte *)(*(int *)(DAT_009c2964 + 0x18) + 0xd)) {
          local_8 = FUN_008298f0(uVar3);
          uVar2 = FUN_007c4b80();
          DAT_009c2964 = 0;
          FUN_00834ec8(1);
          return uVar2;
        }
      }
      return 0;
    }
  }
  return 0xffffffee;
}

