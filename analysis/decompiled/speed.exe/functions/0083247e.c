/* speed.exe 0083247e FUN_0083247e; analysis pseudocode, not buildable source.
 * calls 00832336 FUN_00832336
 * calls 00831d15 FUN_00831d15
 * calls 00831c3b FUN_00831c3b
 */

void FUN_0083247e(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  undefined4 *puVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = 0;
  local_c = 0;
  local_8 = 0;
  if ((&DAT_009c2a20)[unaff_EDI * 4] != -1) {
    iVar1 = FUN_00831d15(&DAT_009c2a20 + unaff_EDI * 4);
    if (iVar1 != 0) {
      iVar2 = FUN_00831c3b(iVar1,&local_c);
      if (iVar2 != 0) {
        puVar3 = &local_c;
        goto LAB_008324c1;
      }
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_008324c1:
  iVar1 = FUN_00832336(puVar3);
  if ((iVar2 != 0) && (iVar1 < 0)) {
    FUN_00832336(0);
  }
  return;
}

