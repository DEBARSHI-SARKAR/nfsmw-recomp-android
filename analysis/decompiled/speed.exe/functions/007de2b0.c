/* speed.exe 007de2b0 __ZeroTail; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __ZeroTail
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

undefined4 __ZeroTail(int param_1,int param_2)

{
  uint uVar1;
  int local_c;
  
  local_c = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  uVar1 = *(uint *)(param_1 + local_c * 4) & ~(-1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f));
  while( true ) {
    if (uVar1 != 0) {
      return 0;
    }
    local_c = local_c + 1;
    if (2 < local_c) break;
    uVar1 = *(uint *)(param_1 + local_c * 4);
  }
  return 1;
}

