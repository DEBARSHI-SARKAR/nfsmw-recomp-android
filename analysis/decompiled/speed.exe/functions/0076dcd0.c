/* speed.exe 0076dcd0 FUN_0076dcd0; analysis pseudocode, not buildable source.
 * calls 00765450 FUN_00765450
 */

int FUN_0076dcd0(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *local_8 [2];
  
  FUN_00765450(param_1,local_8);
  bVar1 = *local_8[0];
  iVar2 = 0;
  if (bVar1 != 0) {
    do {
      local_8[0] = local_8[0] + 4;
      if (((byte)*(undefined4 *)local_8[0] & 0xf) == 1) {
        if (param_2 < 1) {
          return iVar2;
        }
        param_2 = param_2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)bVar1);
  }
  return 0;
}

