/* speed.exe 00798790 FUN_00798790; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 0083c9b0 FUN_0083c9b0
 * calls 00840c60 FUN_00840c60
 * calls 00796d30 FUN_00796d30
 */

void FUN_00798790(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0091cf90;
  FUN_00796d30();
  iVar2 = FUN_00794f80();
  if (*(int *)(iVar2 + 0x38) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00794f80(0x73656c66);
    iVar2 = FUN_00840c60(*(undefined4 *)(iVar2 + 0x38));
  }
  FUN_0083c9b0(param_1,param_2,"V=%d P=%s E=%d L=%d M=%d",0x2ef67,iVar2 + 0x18,
               *(undefined4 *)(iVar1 + 0x18c),*(undefined1 *)(iVar1 + 400),
               *(undefined1 *)(iVar1 + 0x138));
  return;
}

