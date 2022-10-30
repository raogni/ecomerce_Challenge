import React from 'react';
import Hero from '../components/Hero';
import '../App.css';
import Navbar from '../components/Navbar';
import Categories from '../components/Categories';
import Products from '../components/Products';
import Footer from '../components/Footer';


//import Footer from '../Footer';

export default function Home() {
  return (
    <div>
      <Navbar />
      <Hero />     
      <Footer />
    </div>
  );
}