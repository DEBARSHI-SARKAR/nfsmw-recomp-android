/* speed.exe 00833087 FUN_00833087; analysis pseudocode, not buildable source.
 * calls 00831dbc FUN_00831dbc
 * calls 00832f5b FUN_00832f5b
 */

undefined4 FUN_00833087(undefined4 param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *in_EAX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_18;
  undefined4 local_14;
  int local_10;
  uint *local_c;
  undefined4 local_8;
  
  uVar3 = in_EAX[1];
  local_8 = 1;
  local_10 = 0;
  if (0 < (char)uVar3) {
    while( true ) {
      local_c = in_EAX + 2;
      bVar1 = *(byte *)(local_10 + param_3);
      local_8 = 0;
      if (0x1f < bVar1) break;
      uVar4 = (uint)(byte)in_EAX[3];
      uVar6 = 1 << (bVar1 & 0x1f);
      if ((*local_c & uVar6) == 0) {
        return 0;
      }
      if ((uVar4 != 0) && (uVar4 != 0xfe)) {
        if (uVar4 == 0xff) {
          bVar2 = *(byte *)((int)in_EAX + 0xe);
          if (-1 < (char)bVar2) {
            local_14 = *param_2;
            iVar5 = FUN_00831dbc(&local_14,&local_18);
            if (iVar5 == 0) {
              return local_8;
            }
            if (bVar1 != *(byte *)(local_18 + (uint)bVar2)) {
              return local_8;
            }
            goto LAB_0083314b;
          }
          iVar5 = FUN_00832f5b(param_1);
          uVar4 = *(uint *)(iVar5 + (bVar2 & 0x7f) * 4);
        }
        else {
          uVar4 = param_2[uVar4];
        }
        if ((uVar4 & uVar6) == 0) {
          return local_8;
        }
      }
LAB_0083314b:
      local_10 = local_10 + 1;
      in_EAX = local_c;
      if ((char)uVar3 <= local_10) {
        return 1;
      }
    }
  }
  return local_8;
}

