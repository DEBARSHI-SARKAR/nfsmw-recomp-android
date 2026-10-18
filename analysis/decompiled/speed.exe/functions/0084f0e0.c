/* speed.exe 0084f0e0 FUN_0084f0e0; analysis pseudocode, not buildable source.
 * calls 0084ee80 FUN_0084ee80
 * calls 007d6cb0 __security_check_cookie
 * calls 0084ef70 FUN_0084ef70
 * calls 0084b1e0 FUN_0084b1e0
 * calls 0084ed50 FUN_0084ed50
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall FUN_0084f0e0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  uVar3 = *(uint *)(param_1 + 0x94);
  uVar5 = 0;
  if (0 < (int)uVar3) {
    while( true ) {
      if (3 < *(int *)(param_1 + 0x94)) {
        return uVar3;
      }
      if ((int)uVar5 < 0) {
        return uVar3;
      }
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xa8));
      pbVar1 = (byte *)(puVar6 + 2);
      local_18 = 0x10;
      uVar3 = FUN_0084b1e0(*(undefined4 *)(param_1 + 0x80),pbVar1,*(undefined4 *)(param_1 + 0x9c),0,
                           local_14,&local_18);
      if ((int)uVar3 < 1) break;
      puVar6[1] = uVar3;
      bVar2 = *pbVar1;
      *puVar6 = CONCAT31(CONCAT21(CONCAT11(local_c,local_b),local_a),local_9);
      if ((bVar2 < 0x10) || (0x3f < bVar2)) {
        if (bVar2 < 0xc0) {
          uVar5 = FUN_0084ef70(puVar6);
          uVar3 = uVar5;
          if (uVar5 == 1) {
            bVar2 = *pbVar1;
            uVar3 = (uint)bVar2;
            if ((0x7f < bVar2) && (bVar2 < 0xc0)) {
              uVar3 = FUN_0084ed50(bVar2 + 0x40);
            }
          }
        }
        else {
          uVar3 = bVar2 - 0xc0;
          if (bVar2 - 0xc0 ==
              *(byte *)(*(int *)(param_1 + 0xc4) + 8 + *(int *)(param_1 + 0xc0)) - 0x80) {
            iVar4 = *(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0xc0);
            *(int *)(param_1 + 0xc0) = iVar4 % *(int *)(param_1 + 0xb8);
            uVar3 = iVar4 / *(int *)(param_1 + 0xb8);
          }
        }
      }
      else {
        uVar3 = FUN_0084ee80(puVar6);
      }
      if (*(int *)(param_1 + 0x94) < 1) {
        return uVar3;
      }
    }
    if ((int)uVar3 < 0) {
      *(undefined4 *)(param_1 + 0x94) = 4;
    }
  }
  return uVar3;
}

