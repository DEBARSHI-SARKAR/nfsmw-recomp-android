/* speed.exe 00614a40 FUN_00614a40; analysis pseudocode, not buildable source.
 * calls 00614240 FUN_00614240
 * calls 00613880 FUN_00613880
 * calls 007c4b80 FUN_007c4b80
 * calls 006144b0 FUN_006144b0
 * calls 006149c0 FUN_006149c0
 */

/* WARNING: Removing unreachable block (ram,0x00614a63) */
/* WARNING: Removing unreachable block (ram,0x00614a9b) */

void FUN_00614a40(void)

{
  char cVar1;
  undefined4 *in_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_006149c0();
  uVar2 = FUN_00614240();
  uVar4 = uVar2 & 0xff;
  if (0x50 < uVar4) {
    FUN_00613880(*in_EAX,"%s too new: read version %d.%d; expected at most %d.%d",in_EAX[4],
                 (int)uVar4 >> 4,uVar2 & 0xf,5,0);
  }
  if (uVar4 < 0x50) {
    FUN_00613880(*in_EAX,"%s too old: read version %d.%d; expected at least %d.%d",in_EAX[4],
                 (int)uVar4 >> 4,uVar2 & 0xf,5,0);
  }
  cVar1 = FUN_00614240();
  in_EAX[3] = (uint)(cVar1 != '\x01');
  cVar1 = FUN_00614240();
  if (cVar1 != '\x04') {
    FUN_00613880(*in_EAX,"virtual machine mismatch in %s: size of %s is %d but read %d",in_EAX[4],
                 &DAT_008a45a8,4,cVar1);
  }
  cVar1 = FUN_00614240();
  if (cVar1 != '\x04') {
    FUN_00613880(*in_EAX,"virtual machine mismatch in %s: size of %s is %d but read %d",in_EAX[4],
                 "size_t",4,cVar1);
  }
  cVar1 = FUN_00614240();
  if (cVar1 != '\x04') {
    FUN_00613880(*in_EAX,"virtual machine mismatch in %s: size of %s is %d but read %d",in_EAX[4],
                 "Instruction",4,cVar1);
  }
  cVar1 = FUN_00614240();
  if (cVar1 != '\x06') {
    FUN_00613880(*in_EAX,"virtual machine mismatch in %s: size of %s is %d but read %d",in_EAX[4],
                 &DAT_008a4590,6,cVar1);
  }
  cVar1 = FUN_00614240();
  if (cVar1 != '\b') {
    FUN_00613880(*in_EAX,"virtual machine mismatch in %s: size of %s is %d but read %d",in_EAX[4],
                 &DAT_008a458c,8,cVar1);
  }
  cVar1 = FUN_00614240();
  if (cVar1 != '\t') {
    FUN_00613880(*in_EAX,"virtual machine mismatch in %s: size of %s is %d but read %d",in_EAX[4],
                 &DAT_008a4588,9,cVar1);
  }
  cVar1 = FUN_00614240();
  if (cVar1 != '\t') {
    FUN_00613880(*in_EAX,"virtual machine mismatch in %s: size of %s is %d but read %d",in_EAX[4],
                 &DAT_008a4154,9,cVar1);
  }
  cVar1 = FUN_00614240();
  if (cVar1 != '\x04') {
    FUN_00613880(*in_EAX,"virtual machine mismatch in %s: size of %s is %d but read %d",in_EAX[4],
                 "number",4,cVar1);
  }
  FUN_006144b0();
  iVar3 = FUN_007c4b80();
  if (iVar3 != 0x1df5e76) {
    FUN_00613880(*in_EAX,"unknown number format in %s",in_EAX[4]);
  }
  return;
}

