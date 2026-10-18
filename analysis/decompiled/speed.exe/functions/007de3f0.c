/* speed.exe 007de3f0 __RoundMan; analysis pseudocode, not buildable source.
 * calls 007de2b0 __ZeroTail
 * calls 007de340 __IncMan
 */

/* Library Function - Single Match
    __RoundMan
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

undefined4 __RoundMan(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = 0x1f - ((byte)param_2 & 0x1f);
  if (((*(uint *)(param_1 + local_10 * 4) & 1 << (bVar2 & 0x1f)) != 0) &&
     (iVar1 = __ZeroTail(param_1,param_2), iVar1 == 0)) {
    local_14 = __IncMan(param_1,param_2 + -1);
  }
  *(uint *)(param_1 + local_10 * 4) = -1 << (bVar2 & 0x1f) & *(uint *)(param_1 + local_10 * 4);
  while (local_10 = local_10 + 1, local_10 < 3) {
    *(undefined4 *)(param_1 + local_10 * 4) = 0;
  }
  return local_14;
}

