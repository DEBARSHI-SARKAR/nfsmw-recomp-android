/* speed.exe 0072a500 FUN_0072a500; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Removing unreachable block (ram,0x0072a56b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072a500(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 *in_stack_0000001c;
  
  puVar2 = DAT_009aa3b0;
  if ((undefined4 **)DAT_009aa3b0 != &DAT_009aa3b0) {
    do {
      if (_DAT_00890968 < (float)puVar2[0x25]) {
        FUN_007c4b80();
        FUN_007c4b80();
      }
      puVar2 = (undefined4 *)*puVar2;
    } while ((undefined4 **)puVar2 != &DAT_009aa3b0);
  }
  uVar1 = FUN_007c4b80();
  *in_stack_00000010 = uVar1;
  uVar1 = FUN_007c4b80();
  *in_stack_00000014 = uVar1;
  uVar1 = FUN_007c4b80();
  *in_stack_00000018 = uVar1;
  uVar1 = FUN_007c4b80();
  *in_stack_0000001c = uVar1;
  return;
}

