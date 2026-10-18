/* speed.exe 00614a10 FUN_00614a10; analysis pseudocode, not buildable source.
 * calls 00614240 FUN_00614240
 * calls 00613880 FUN_00613880
 */

void FUN_00614a10(undefined4 param_1)

{
  undefined4 *in_EAX;
  uint uVar1;
  uint unaff_ESI;
  
  uVar1 = FUN_00614240();
  if ((uVar1 & 0xff) != unaff_ESI) {
    FUN_00613880(*in_EAX,"virtual machine mismatch in %s: size of %s is %d but read %d",in_EAX[4],
                 param_1);
  }
  return;
}

