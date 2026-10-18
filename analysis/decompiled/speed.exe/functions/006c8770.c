/* speed.exe 006c8770 FUN_006c8770; analysis pseudocode, not buildable source.
 */

undefined4 FUN_006c8770(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_00982bdc + 0x5c))(DAT_00982bdc,0x400,0x400,1,1,0x15,0,&DAT_00982cf0,0);
  if (iVar1 < 0) {
    return 0x80004005;
  }
  if (DAT_00982c08 == 1) {
    iVar1 = (**(code **)(*DAT_00982bdc + 0x5c))(DAT_00982bdc,0x400,0x400,1,2,0x4b,0,&DAT_00982cf8,0)
    ;
  }
  else {
    if (DAT_00982c08 != 2) goto LAB_006c8800;
    iVar1 = (**(code **)(*DAT_00982bdc + 0x5c))
                      (DAT_00982bdc,0x400,0x400,1,2,0x36314644,0,&DAT_00982cf8,0);
  }
  if (iVar1 < 0) {
    return 0x80004005;
  }
LAB_006c8800:
  iVar1 = (**(code **)(*DAT_00982cf0 + 0x48))(DAT_00982cf0,0,&DAT_00982cec);
  if ((((-1 < iVar1) &&
       (iVar1 = (**(code **)(*DAT_00982cf8 + 0x48))(DAT_00982cf8,0,&DAT_00982cf4), -1 < iVar1)) &&
      (DAT_00982cf8 != (int *)0x0)) && (DAT_00982cf4 != 0)) {
    return 0;
  }
  return 0x80004005;
}

