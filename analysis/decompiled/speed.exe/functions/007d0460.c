/* speed.exe 007d0460 AdjustPointer; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    void * __cdecl AdjustPointer(void *,struct PMD const &)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void * __cdecl AdjustPointer(void *param_1,PMD *param_2)

{
  void *local_8;
  
  local_8 = (void *)((int)param_1 + *(int *)param_2);
  if (-1 < *(int *)(param_2 + 4)) {
    local_8 = (void *)((int)local_8 +
                      *(int *)(param_2 + 4) +
                      *(int *)(*(int *)((int)param_1 + *(int *)(param_2 + 4)) +
                              *(int *)(param_2 + 8)));
  }
  return local_8;
}

