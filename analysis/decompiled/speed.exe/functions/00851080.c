/* speed.exe 00851080 FUN_00851080; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 0084fcc0 FUN_0084fcc0
 * calls 0084b560 FUN_0084b560
 */

undefined4 FUN_00851080(void)

{
  int in_EAX;
  undefined4 unaff_EBX;
  undefined4 *unaff_EDI;
  
  if (*(int *)(in_EAX + 0x94) != 1) {
    FUN_0084af40();
    return 0xfffffffe;
  }
  *(undefined4 *)(in_EAX + 0x80) = 0;
  *(undefined4 *)(in_EAX + 0x48) = 0;
  FUN_0084fcc0();
  *(undefined4 *)(in_EAX + 0x84) = *unaff_EDI;
  *(undefined4 *)(in_EAX + 0x88) = unaff_EDI[1];
  *(undefined4 *)(in_EAX + 0x8c) = unaff_EDI[2];
  *(undefined4 *)(in_EAX + 0x90) = unaff_EDI[3];
  *(undefined4 *)(in_EAX + 0x80) = unaff_EBX;
  *(undefined4 *)(in_EAX + 0x48) = unaff_EBX;
  FUN_0084b560();
  *(undefined4 *)(in_EAX + 0x94) = 2;
  return 0;
}

