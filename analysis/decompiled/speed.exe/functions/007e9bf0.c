/* speed.exe 007e9bf0 FUN_007e9bf0; analysis pseudocode, not buildable source.
 * calls 007e9560 FUN_007e9560
 * calls 007ec0b0 FUN_007ec0b0
 */

int FUN_007e9bf0(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_14;
  uint local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar7 = *(uint *)(param_1 + 0x1c);
  uVar8 = *(uint *)(param_1 + 0x18);
  local_8 = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
    local_c = 0x10;
    if ((byte)(&DAT_008c1798)[uVar2 & 0xff] != 0xf) {
      local_c = (uint)(byte)(&DAT_008c1798)[uVar2 & 0xff];
    }
    if (((int)uVar8 < 1) || ((int)uVar7 < 1)) {
      return 0;
    }
    local_14 = 0;
    if (-1 < iVar1) {
      cVar3 = FUN_007e9560(uVar2);
      do {
        if (((uVar2 == 0x60) || (uVar2 == 0x61)) || (uVar2 == 0x62)) {
          uVar4 = uVar8 + 3 & 0xfffffffc;
          uVar6 = uVar7 + 3 & 0xfffffffc;
        }
        else {
          uVar6 = uVar7;
          if (uVar2 == 0x68) {
            uVar4 = uVar8 + 1 & 0xfffffffe;
          }
          else {
            uVar4 = uVar8;
            if (cVar3 != '\0') {
              uVar4 = uVar8 + 0x1f & 0xffffffe0;
              uVar6 = uVar7 + 0xf & 0xfffffff0;
            }
          }
        }
        local_8 = local_8 + ((int)(uVar4 * local_c + 7) >> 3) * uVar6;
        if (cVar3 != '\0') {
          iVar5 = FUN_007ec0b0(uVar2,uVar6,uVar4);
          local_8 = local_8 + iVar5;
        }
        if ((uVar8 == 1) && (uVar7 == 1)) break;
        uVar8 = (int)uVar8 >> 1;
        uVar7 = (int)uVar7 >> 1;
        if ((int)uVar8 < 1) {
          uVar8 = 1;
        }
        if ((int)uVar7 < 1) {
          uVar7 = 1;
        }
        local_14 = local_14 + 1;
      } while (local_14 <= iVar1);
    }
  }
  return local_8 + 0x20;
}

