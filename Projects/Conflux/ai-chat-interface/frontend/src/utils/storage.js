export const loadState = (key) => {
    try {
      const serializedState = localStorage.getItem(key);
      return serializedState ? JSON.parse(serializedState) : null;
    } catch (e) {
      return null;
    }
  };
  
  export const saveState = (key, state) => {
    try {
      const serializedState = JSON.stringify(state);
      localStorage.setItem(key, serializedState);
    } catch (e) {
      console.error('Local storage save failed:', e);
    }
  };