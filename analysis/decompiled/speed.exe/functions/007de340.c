/* speed.exe 007de340 __IncMan; analysis pseudocode, not buildable source.
 * calls 007e5b90 ___addl
 */

/* Library Function - Single Match
    __IncMan
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

int __IncMan(int param_1,int param_2)

{
  int local_c;
  int local_8;
  
  local_c = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  local_8 = ___addl(*(undefined4 *)(param_1 + local_c * 4),
                    1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f),param_1 + local_c * 4);
  while ((local_c = local_c + -1, -1 < local_c && (local_8 != 0))) {
    local_8 = ___addl(*(undefined4 *)(param_1 + local_c * 4),1,param_1 + local_c * 4);
  }
  return local_8;
}

