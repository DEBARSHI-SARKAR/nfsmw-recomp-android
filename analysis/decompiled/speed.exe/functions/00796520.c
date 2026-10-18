/* speed.exe 00796520 FUN_00796520; analysis pseudocode, not buildable source.
 * calls 0083b210 FUN_0083b210
 * calls 0083a670 FUN_0083a670
 * calls 0053a340 FUN_0053a340
 * calls 00794f80 FUN_00794f80
 * calls 00840c60 FUN_00840c60
 */

void FUN_00796520(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_100 [256];
  
  iVar1 = FUN_00794f80();
  iVar2 = 0;
  if (*(int *)(iVar1 + 0x38) != 0) {
    iVar2 = FUN_00840c60(*(int *)(iVar1 + 0x38),0x636f6e66);
  }
  local_100[0] = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0083a670(iVar2,"TOSAC_URL",local_100,0xff,&DAT_00890978);
    FUN_0083b210(uVar3);
  }
  FUN_0053a340(local_100,0x780207ca,0,0x9016a670,0x417b2601);
  return;
}

