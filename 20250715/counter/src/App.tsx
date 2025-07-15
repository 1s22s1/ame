import { useEffect, useState } from 'react'
import './App.css'
import { Button, Stack } from '@mui/material';

function App() {
  const [count, setCount] = useState(0);

  const plus = () => {
    setCount(count + 1);
  }

  const minus = () => {
    setCount(count - 1);
  }

  useEffect(() => {
    document.title = `Now, count is ${count}`
  }, [count])

  return (
    <>
      <Stack direction={'row'} spacing={2}>
        <Button variant='outlined' onClick={plus}>+</Button>
        <Button variant='outlined' onClick={minus}>-</Button>
      </Stack>
      <p>Now, count is {count}.</p>
    </>
  )
}

export default App
