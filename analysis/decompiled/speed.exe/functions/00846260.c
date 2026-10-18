/* speed.exe 00846260 FUN_00846260; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083ad80 FUN_0083ad80
 */

uint FUN_00846260(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_stack_0000001c;
  
  uVar1 = FUN_0083a670(in_stack_0000001c,&DAT_008b6e64,0);
  uVar2 = FUN_0083ad80(uVar1);
  return (uVar2 & 0x100000) << 4 | uVar2 & 0xc0000;
}

