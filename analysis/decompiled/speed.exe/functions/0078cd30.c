/* speed.exe 0078cd30 FUN_0078cd30; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 0056bc10 FUN_0056bc10
 * calls 00515e20 FUN_00515e20
 */

void FUN_0078cd30(void)

{
  undefined4 uVar1;
  undefined1 local_80 [128];
  
  uVar1 = FUN_0056bc10(0x88a7cf05);
  FUN_00515e20(local_80,0x80,uVar1);
  FUN_00598970(&DAT_00890978,&DAT_00890978,4,0x417b2601,0x1cad26e2,0x1cad26e2,local_80);
  return;
}

