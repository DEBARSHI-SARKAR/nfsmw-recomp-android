/* speed.exe 0081c0cf FUN_0081c0cf; analysis pseudocode, not buildable source.
 */

int FUN_0081c0cf(ushort *param_1)

{
  char cVar1;
  int iStack_8;
  
  cVar1 = *(char *)((int)param_1 + 3);
  iStack_8 = 0;
  if (cVar1 == '\n') {
    iStack_8 = 0x88;
  }
  else if (cVar1 == '\x04') {
    iStack_8 = 0x33;
  }
  else if (cVar1 == '\x16') {
    iStack_8 = 0x66;
  }
  else if (cVar1 == '\t') {
    iStack_8 = 0x100;
  }
  else if (cVar1 == '\b') {
    iStack_8 = 0x200;
  }
  else if ((cVar1 == '\x10') || (cVar1 == '\x17')) {
    return (uint)(byte)param_1[1] << 3;
  }
  return (int)((uint)*param_1 * (uint)(byte)param_1[1] * iStack_8) >> 8;
}

