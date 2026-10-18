/* speed.exe 0081e4be FUN_0081e4be; analysis pseudocode, not buildable source.
 * calls 008219bb FUN_008219bb
 * calls 0081efb2 FUN_0081efb2
 * calls 0081f7cb FUN_0081f7cb
 * calls 008223c3 FUN_008223c3
 */

int FUN_0081e4be(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int local_8;
  
  if (DAT_009c2188 == '\0') {
    return -10;
  }
  iVar1 = FUN_0081f7cb(param_1);
  if (-1 < iVar1) {
    local_8 = -1;
    iVar2 = FUN_008223c3(iVar1,&local_8);
    while (iVar2 != 0) {
      puVar3 = (ushort *)(local_8 * 0x90 + DAT_009c21f4 + 0x8c);
      if (*puVar3 == param_2) {
        return 0;
      }
      *puVar3 = (ushort)param_2;
      FUN_008219bb(local_8);
      FUN_0081efb2(local_8);
      iVar2 = FUN_008223c3(iVar1,&local_8);
    }
  }
  return iVar1;
}

