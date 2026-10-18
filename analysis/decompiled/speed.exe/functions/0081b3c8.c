/* speed.exe 0081b3c8 FUN_0081b3c8; analysis pseudocode, not buildable source.
 * calls 0081b1e7 FUN_0081b1e7
 * calls 0081ed1c FUN_0081ed1c
 */

undefined4 FUN_0081b3c8(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_d0 [204];
  
  *param_2 = 0;
  iVar1 = FUN_0081ed1c(local_d0,&DAT_009c1afc);
  if (iVar1 < 0) {
    uVar2 = FUN_0081b1e7(iVar1);
  }
  else {
    if ((&DAT_009c1afc)[param_1] == '\x01') {
      *param_2 = 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

