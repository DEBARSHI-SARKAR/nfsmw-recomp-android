/* speed.exe 007dd150 siglookup; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2003 Debug */

uint __cdecl siglookup(int param_1,uint param_2)

{
  uint local_8;
  
  local_8 = param_2;
  do {
    if (*(int *)(local_8 + 4) == param_1) break;
    local_8 = local_8 + 0xc;
  } while (local_8 < DAT_00906804 * 0xc + param_2);
  if ((DAT_00906804 * 0xc + param_2 <= local_8) || (*(int *)(local_8 + 4) != param_1)) {
    local_8 = 0;
  }
  return local_8;
}

